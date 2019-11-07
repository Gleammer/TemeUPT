let getsum a b c =
  let rec getsum1 a b c d s =
    if d > b then s else if d mod c == 0 then 
    begin 
      print_newline();
      print_int(d);
      getsum1 a b c (d+1) (s+d)
    end else getsum1 a b c (d+1) s
  in getsum1 a b c a 0
 
let rez = getsum 1 10 2

;;