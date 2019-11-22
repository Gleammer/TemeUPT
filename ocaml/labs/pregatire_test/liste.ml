module Int = struct
  type t = int
  let compare = compare 
end
module IS = Set.Make(Int)
module S=Set.Make(String)

let set_of_intlist lst = List.fold_left (fun res e -> IS.add e res) IS.empty lst

let rez = IS.elements (set_of_intlist [2;6;4;3;1;7;8;9])

let union s1 s2 = S.fold (fun e s -> S.add e s) s1 s2

let rez2 = union [1;2;3;4] [5;6;7;8;9]


;;