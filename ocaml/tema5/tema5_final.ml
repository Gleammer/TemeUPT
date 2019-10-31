(* Exercitiul 7_combine *)
let combine l1 l2 =
  let rec comb l1 l2 rez = match (l1, l2) with
    |([],[]) -> List.rev rez
    |((_::_, [])|([], _::_)) -> List.rev rez
    |(h1::t1, h2::t2) -> comb t1 t2 ((h1,h2)::rez)
  in comb l1 l2 []

(* Exercitiul 7_split *)
let split l = 
  let rec splitter l1 l2 = function
    | [] -> List.rev l1,List.rev l2
    | h::t -> splitter (fst(h)::l1) (snd(h)::l2) t
  in splitter [] [] l

(* Exercitiul 8 *)
let partition cond l = 
  let rec parts cond l1 l2 = function
    | [] -> List.rev l1,List.rev l2
    | h::t -> if cond h then parts cond (h::l1) l2 t else parts cond l1 (h::l2) t
  in parts cond [] [] l
    
(* Exercitiul 10 *)
let dublic l =
  let rec dub rez = function
    | [] -> List.rev rez
    | h::[] -> dub(h::rez) []
    | e1::e2::t when e1 == e2 -> dub (e2::rez) t
    | h::t -> if h == List.hd t then dub rez t else dub (h::rez) t
  in dub [] l

(* Exercitiul 12 *)
let rec merge xs ys =
  match xs, ys with
  | [], _ -> ys
  | _, [] -> xs
  | hx :: txs, hy :: tys ->
      if hx < hy then hx :: merge txs ys else hy :: merge xs tys

(* Exercitiul 13 *)
let splits list =
  let rec splits1 k l1 l2 = function
    | [] -> List.rev l1, List.rev l2 
    | h :: t -> if k mod 2 == 1 then splits1 (k+1) (h::l1) l2 t 
                                else splits1 (k+1) l1 (h::l2) t
  in splits1 1 [] [] list
  
(* Fiecare functie poate fi apelata prin let rezultat = <nume program> <variabile necesare>
--> precum a fost specificat in conditia fiecarei probleme *)