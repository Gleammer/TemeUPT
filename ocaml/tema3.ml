(* Exercitiul 2 *)

2 * (3 - 8) + 4;;
2 + 4 - 5 * 3;;


(* Exercitiul 3 *)

let rec cmmdc a b = 
  if b == 0 then a
  else cmmdc b (a mod b)

let rez = cmmdc 27 18
;;

(* Exercitiul 6 *)

let modulo1 a p  =
  let rec modulo a p k b =
    if a mod p == 0 then 0
    else if a mod p == 1 then k
    else modulo (a*b) p (k + 1) b
  in modulo a p 1 a

let rez2 = modulo1 3 8
;;