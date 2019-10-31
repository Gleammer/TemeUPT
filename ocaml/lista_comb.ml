let  rec sortareliste l1 l2 =
   List.fold_right (fun rez elem -> rez::elem ) l1 l2

let rez = sortareliste [1;2;3] [4;3;2]

;;