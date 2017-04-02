program b_b;

var
        la,lb,lc,pa,pb : integer;
        hsl : string;

begin

        readln(la,lb);
        readln(lc);
        readln(pa,pb);
        if (pa=la) and (pb=lb) then
                writeln( 'tepat pada titik tengah arena pertandingan' )
        else if(   ((pa=(lc+la)) or  (pa=(la-lc))) and ((pb<(lc+lb)) and  (pb>(lb-lc))) ) or  (  ((pb=(lc+lb)) or  (pb=(lb-lc))) and   ((pa<(lc+la)) and  (pa>(la-lc))) ) then
                writeln(  'tepat pada batas arena pertandingan')
        else if((pa<(lc+la)) and  (pa>(la-lc))) and ((pb<(lc+lb)) and  (pb>(lb-lc)))then
                writeln(  'di dalam arena pertandingan')
        else if ((pa>(lc+la)) or  (pa<(la-lc))) or ((pb>(lc+lb)) or  (pb<(lb-lc)))then
                writeln(  'di luar arena pertandingan');



end.
