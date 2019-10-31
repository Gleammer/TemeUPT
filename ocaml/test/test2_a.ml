let sublist a lst =
  let rec subs a l2 = function
    |[] -> List.rev l2
    |h::t -> if a == h then List.rev (h::l2) else subs a (h::l2) t
  in subs a [] lst

let rez = sublist 5 [1;2;3;4;5;6;7]
;;