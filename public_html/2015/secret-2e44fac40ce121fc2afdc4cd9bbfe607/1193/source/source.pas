program j_j;

var
        a,b : integer;
        hsl:string;
begin

        readln(a);
        readln(b);
        if ((a*2)>b) or ((a*2)=b) then
                hsl:='PERANG'
        else if (a*2)<b then
                hsl:='MUNDUR';
        writeln(hsl);


end.

