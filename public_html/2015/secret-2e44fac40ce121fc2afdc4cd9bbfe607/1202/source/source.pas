program b_b;

var
        la,lb,lc,pa,pb : integer;
        hsl : string;

begin

        readln(la,lb);
        readln(lc);
        readln(pa,pb);
        if (pa=la) and (pb=lb) then
                hsl := 'tepat pada titik tengah arena pertandingan'
        else if(   ((pa=(lc+la)) or  (pa=(la-lc))) and ((pb<(lc+lb)) and  (pb>(lb-lc))) ) or  (  ((pb=(lc+lb)) or  (pb=(lb-lc))) and   ((pa<(lc+la)) and  (pa>(la-lc))) ) then
                hsl := 'tepat pada batas arena pertandingan'
        else if((pa<(lc+la)) and  (pa>(la-lc))) and ((pb<(lc+lb)) and  (pb>(lb-lc)))then
                hsl := 'di dalam arena pertandingan'
        else if ((pa>(lc+la)) or  (pa<(la-lc))) or ((pb>(lc+lb)) or  (pb<(lb-lc)))then
                hsl := 'di luar arena pertandingan';

        writeln(hsl);

end.
