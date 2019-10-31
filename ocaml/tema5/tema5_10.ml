let dublic l =
  let rec dub rez = function
    | [] -> List.rev rez
    | h::[] -> dub(h::rez) []
    | e1::e2::t when e1 == e2 -> dub (e2::rez) t
    | h::t -> if h == List.hd t then dub rez t else dub (h::rez) t
  in dub [] l
let rez1 = dublic [1;2;3;4;5;5;5;6;8;10;2;2;11;13]
let rez2 = dublic [5;5;5]
;;