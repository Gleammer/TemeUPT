let insert a cond lst = 
  let rec ins k a cond l2 = function
    |[] -> List.rev l2
    |h::t -> if cond h && k != 0 then ins 0 a cond (a::h::l2) t else ins 1 a cond (h::l2) t
  in ins 1 a cond [] lst

let rez = insert 5 (fun x -> x >= 2) [1;2;3]
;;