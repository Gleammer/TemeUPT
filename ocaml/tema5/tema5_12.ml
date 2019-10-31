let rec merge xs ys =
  match xs, ys with
  | [], _ -> ys
  | _, [] -> xs
  | hx :: txs, hy :: tys ->
      if hx < hy then hx :: merge txs ys else hy :: merge xs tys

let rez = merge [1;3;5] [2;4;6]

;;