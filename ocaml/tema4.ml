(* Exercitiul 2 *)
let getdiv a b d = 
  let rec getdiv1 res a b d c = 
    if c < a then res else if c mod d != 0 then getdiv1 res a b d (c-1) else getdiv1 (c::res) a b d (c-d)
  in getdiv1 [] a b d b

let lista1 = getdiv 11 26 3
;;
(* Acest program returneaza toate valorile intregi intre a si b INCLUSIV - nu era specificat 
in conditie daca e inclusiva conditia sau nu*)

(* Exercitiul 9 *)
let toint lista =
  let rec listcreate lista k =
    match lista with
    | [] -> k
    | h::t ->  listcreate t (h + 10*k) 
  in listcreate lista 0

let rez = toint [2; 1; 4]
;;