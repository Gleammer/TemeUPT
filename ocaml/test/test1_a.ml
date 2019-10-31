let puteri n = 
  let rec pows d n l=
    if d>=n then List.rev l else pows (d*2) n (d::l)
  in pows 1 n []

let rez = puteri 458
;;