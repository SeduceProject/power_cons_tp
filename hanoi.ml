let rec hanoi n a b c move =
        if n <> 0 then begin
                Printf.printf "Move disk from pole %d to pole %d\n" a c;
                hanoi (pred n) a c b (succ move);
                hanoi (pred n) b a c (succ move)
        end
 
let () =
  hanoi (int_of_string Sys.argv.(1)) 1 2 3 0
