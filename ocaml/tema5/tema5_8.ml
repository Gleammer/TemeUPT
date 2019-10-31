let partition cond l = 
  let rec parts cond l1 l2 = function
    | [] -> List.rev l1,List.rev l2
    | h::t -> if cond h then parts cond (h::l1) l2 t else parts cond l1 (h::l2) t
  in parts cond [] [] l

let rez = partition (fun x -> x mod 2 == 1) [2;4;5;6;6;7;8]
;;