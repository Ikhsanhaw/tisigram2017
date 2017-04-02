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
        while (a+b<=u+1) do
        begin
               //writeln(copy(s,a,b));
                if (copy(s,a,b)=c) then
                        begin
                        count:=count+1;
                        a:=a+b;
                        end
                else
                        a:=a+1;
        end;
        writeln(count);
        //readln;
end.