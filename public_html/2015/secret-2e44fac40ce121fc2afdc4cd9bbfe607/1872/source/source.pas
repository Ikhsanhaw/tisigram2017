program no3;
var
i,t:integer;
a,b,c,d,e,f:array[1..100] of longint;
g:array[1..6] of longint;
begin
readln(t);
for i:=1 to t do
begin
        read(a[i]);
        read(b[i]);
        read(c[i]);
        read(d[i]);
        read(e[i]);
        read(f[i]);
writeln;
end;
for i:=1 to t do
begin
        g[i]:=a[i]+b[i]+c[i]+d[i]+e[i]+f[i];
end;
for i:=1 to t do
        writeln(g[i]);
readln;
readln;
end.
