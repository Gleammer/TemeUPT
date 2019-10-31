(* EXERCITIUL 3 *)

let is_bisect n = (n mod 4 == 0 && n mod 100 <> 0) || n mod 400 == 0
let try_bisect = is_bisect 420 


(* EXERCITIUL 6 *)
let f x = 4. *. x
let g x = x +. 5.
let compus operand x = operand (f x) (g x)
let t = compus ( +. ) 4.
(* Formam fucntia compusa prin t = compus ( operand ) variable 
  unde "operand" este expresia   + | - | * | /   de care avem nevoie - opereaza in float
  variable este variabila care are sa-l inlocuiasca pe x - la fel in float*)


(* EXERCITIUL 7 *)

let sum n = 
  let trun x = 
    if int_of_float(x *. 275. /. 1.05) mod 1 <> 0 then (floor(x *. 275. /. 1.05) +. 1. ) /. 100. else floor(x *. 275. /. 1.05) /. 100.  
  in let rest a = 
    if int_of_float(a *. 100.) mod 5 <> 0 then (5. -. float_of_int(int_of_float(a *. 100.) mod 5)) /. 100. else 0.  
  in if n <= 2. then(
    print_int 0;
    n *. 2.75
  ) else (
    print_float(rest(trun n));
    trun n +. rest( trun n )
  )

let suma = sum 4.
let () = print_newline()
(* Observam ca prima linie de la output ne indica restul ramas pe contul calatorului
    iar "val suma : float =" ne indica suma necesara alimentarii cardului pentru n calatorii *)
;;