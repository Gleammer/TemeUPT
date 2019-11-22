open Printf;;
module Int = struct 
  type t=int 
  let compare=compare
end;;
module I=Set.Make(Int);;
module S=Set.Make(String);;
module IMap=Map.Make(Int);; 
module SMap=Map.Make(String);;


(* Scrieti o functie care ia 2 argumente intregi a si b si returneaza o lista continand toate elementele de la a la b in ordine crescatoare
let rec f a b = match ( a <= b) with
| true -> a::( f (a+1) b )
| false -> [];;*)

(*scrieti o functie eliminate care ia 2 arg - o lista si un nr n; ea elimina toate aparitiile lui n din lista
let eliminate l n = List.fold_right ( fun e r -> if e==n then r else e::r) l [];;*)

(*Scrieti o functie care ia ca arg un dictionar cu chei si val intregi si returneaza multimea valorilor sale
let d = IMap.empty |> IMap.add 1 3 |> IMap.add 2 0 |> IMap.add 3 3 |> IMap.add 4 2;;
let f d = IMap.fold ( fun k v r -> I.add v r) d I.empty;;
let print m = printf "{ "; I.iter ( fun e -> printf "%d, " e ) m ; printf " }";;
print (f d);;*)

(*Scrieti o functie app cu argumentele n x f care aplica de n ori functia f asupra lui x
let f x = x + 1;;
let rec app n x f = match n with
| 0 -> 0
| 1 -> f x 
| _ -> f ( app (n-1) x f );;*)

(*scrieti o functie reverse care ia ca argument o lista si returneaza lista inversata
let reverse l = List.fold_left( fun r e -> e::r ) [] l;;*)

(*scrieti o functie care primeste o multime si creeaza un dictionar in care fiecare element al mult. e atasat la patratul sau
let m = I.empty |> I.add 1 |> I.add 0 |> I.add 3 |> I.add 2;;
let f m = I.fold ( fun e r -> IMap.add (e*e) e r) m IMap.empty;;*)

(*scrieti o functie care ia o lista de siruri de caractere si o functie de la siruri carac la bool si functia mare returneaza o multime cu sirurile pt care f e true
let f s = ( s = "ana" || s = "mere");;
let fct l f = List.fold_left( fun r e -> if f e then S.add e r else r ) S.empty l;;
let print m = printf "{ "; S.iter ( fun e -> printf "%s, " e ) m ; printf " }";;
print (fct ["ana";"are";"multe";"mere"] f);;*)

(*scrieti o functie care ia un dict de siruri->siruri si o functie care trasnforma un sir(in alt sir) si returneaza o lista de perechi [cheie, f(valoare)] 
let d = SMap.empty |> SMap.add "mere" "verzi" |> SMap.add "pere" "galbene" |> SMap.add "cirese" "rosii";;
let f s = String.sub s 2 3;;
let fct d f = SMap.fold ( fun k v r -> (k, (f v))::r  ) d  [];;*)
 
(*scrieti o functie care ia o mult de siruri de caractere si o functie ca la problema de mai sus si returneaza o lista cu elem multimii transformate cu functia aia
let f s = String.sub s 1 3 ;;
let m = S.empty |> S.add "mere" |> S.add "pere" |> S.add "cirese" ;;
let fct m f = S.fold ( fun e r -> (f e)::r ) m [];;*)

(*scrieti o functie care primeste o lista de perechi de siruri de carac si o functie string->bool si pune elementele listei intr un dictionar - primul element
al perechii in cheie si al doilea in valoare, dar doar elementele listei pt care functia e true cand e aplicata pt al doilea element din pereche
let l= [("ana","mere");("ion","pere");("maria","mere");("mihai","cirese")];;
let f s = (s="mere" || s="cirese");;
let fct l f = List.fold_left( fun r (e1,e2) -> if f e2 then SMap.add e1 e2 r else r ) SMap.empty l;;*)

(*
let set_of_intlist lst =
  let rec set_of_il2 res = function
  | [] -> res
  | h :: t -> set_of_il2 (IS.add h res) t
in set_of_il2 IS.empty lst

let rez = set_of_intlist [13;44;11;67;0;41];;
*)

(*Scrieti o functie care ia ca arg un dictionar cu chei si val intregi si returneaza multimea valorilor sale*)
let d = IMap.empty |> IMap.add 1 3 |> IMap.add 2 0 |> IMap.add 3 3 |> IMap.add 4 2;;
let f d = IMap.fold ( fun k v r -> I.add v r) d I.empty;;


let print m = printf "{ "; I.iter ( fun e -> printf "%d, " e ) m ; printf " }";;
print (f d)
;;