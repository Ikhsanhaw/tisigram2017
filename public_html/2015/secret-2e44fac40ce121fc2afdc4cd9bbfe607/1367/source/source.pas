program asdasd;
var
        a,b:integer;
begin
        readln(a);
        readln(b);
        if (b=0) then
                writeln('0 ',a)
        else
                writeln(a div b,' ',a mod b);
end.