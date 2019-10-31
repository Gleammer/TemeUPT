let split l = 
  let rec splitter l1 l2 = function
    | [] -> List.rev l1,List.rev l2
    | h::t -> splitter (fst(h)::l1) (snd(h)::l2) t
  in splitter [] [] l

let rez = split [(1,2);(3,4);(5,6)]
;;