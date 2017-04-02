program asdasd;
var
        s,c:string;
        a,b,u,count:integer;
begin
        readln(s);
        readln(c);
        count:=0;
        a:=1;
        b:=length(c);
        u:=length(s);
        while (a+b<=u) do
        begin
                writeln(copy(s,a,b));
                if (copy(s,a,b)=c) then
                        count:=count+1;
                a:=a+1;
        end;
        writeln(count);
        readln;
end.