let split lst = 
  let rec splitter l1 l2 = function
    | [] -> List.rev l1,List.rev l2
    | h::t -> splitter (fst(h)::l1) (snd(h)::l2) t
  in splitter [] [] lst

let combine lst1 lst2 =
  let rec comb lst1 lst2 rez = match (lst1, lst2) with
    |([],[]) -> List.rev rez
    |((_::_, [])|([], _::_)) -> List.rev rez
    |(h1::t1, h2::t2) -> comb t1 t2 ((h1,h2)::rez)
  in comb lst1 lst2 []

let dublic lst =
  let rec dub rez = function
    | [] -> List.rev rez
    | h::[] -> dub(h::rez) []
    | e1::e2::t when e1 == e2 -> dub (e2::rez) t
    | h::t -> if h == List.hd t then dub rez t else dub (h::rez) t
  in dub [] lst
  
let partition cond lst = 
  let rec parts cond l1 l2 = function
    | [] -> List.rev l1,List.rev l2
    | h::t -> if cond h then parts cond (h::l1) l2 t else parts cond l1 (h::l2) t
  in parts cond [] [] lst
    
let rec merge x y =
  match x, y with
  | [], _ -> y
  | _, [] -> x
  | hx :: txs, hy :: tys ->
      if hx < hy then hx :: merge txs y else hy :: merge x tys

let splits lst =
  let rec splits1 k l1 l2 = function
    | [] -> List.rev l1, List.rev l2 
    | h :: t -> if k mod 2 == 1 then splits1 (k+1) (h::l1) l2 t 
                                else splits1 (k+1) l1 (h::l2) t
  in splits1 1 [] [] lst
  ;;