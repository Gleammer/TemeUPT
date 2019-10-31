let multipli a b =
  let rec mult a b k l =
    if k == b then List.rev l else if k mod 3 == 0 then mult a b (k+1) (k::l) else mult a b (k+1) l
  in mult a b (a+1) []

let rez = multipli 5 30
;;