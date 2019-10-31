let combine l1 l2 =
  let rec comb l1 l2 rez = match (l1, l2) with
    |([],[]) -> List.rev rez
    |((_::_, [])|([], _::_)) -> List.rev rez
    |(h1::t1, h2::t2) -> comb t1 t2 ((h1,h2)::rez)
  in comb l1 l2 []
let rez2 = combine [1;3;5] [2;4;6]
;;