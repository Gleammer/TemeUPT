let splits list =
  let rec splits1 k l1 l2 = function
    | [] -> List.rev l1, List.rev l2 
    | h :: t -> if k mod 2 == 1 then splits1 (k+1) (h::l1) l2 t 
                                else splits1 (k+1) l1 (h::l2) t
  in splits1 1 [] [] list
  
let rez = splits [1;2;3;4;5;6;7;8;9;10;11]
;;