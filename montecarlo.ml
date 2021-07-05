let n = int_of_string Sys.argv.(1);;

let rec pi p cpt =
        if cpt=0 then 4. *. (float_of_int p) /. (float_of_int n)
        else
                let x = Random.float 1. in
                let y = Random.float 1. in
                let c = if x*.x +. y*.y < 1. then 1 else 0 in
                pi (p+c) (cpt-1);;


Printf.printf "Valeur de Pi    : 3,141592653589793238462643383279\n";;
Printf.printf "Valeur calculee : %f apres %d iterations\n" (pi 0 n) n;;
