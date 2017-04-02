program asdasd;
var
        t,i,len,count:integer;
        s:string;
begin
        readln(t);
        for i:=1 to t do
        begin
                readln(s);
                count:=0;
                len:=length(s);
                while (s[len]='0') do
                begin
                        len:=len-1;
                        count:=count+1;
                end;
                writeln(count);

        end;
end.