program no3;
var
i,t:integer;
a,b,c,d,e,f:array[1..100] of longint;
g:array[1..6] of longint;
begin
readln(t);
if (t >= 1) and (t <= 10) then
begin
for i:=1 to t do
begin
        read(a[i]); read(b[i]); read(c[i]); read(d[i]); read(e[i]); read(f[i]);
end;
if (a[i] >= 1) and (a[i] <= 10000) and (b[i] >= 1) and (b[i] <= 10000) and (c[i] >= 1) and (c[i] <= 10000) and (d[i] >= 1) and (d[i] <= 10000) and (e[i] >= 1) and (e[i] <= 10000) and (f[i] >= 1) and (f[i] <= 10000) then
begin
for i:=1 to t do
begin
        g[i]:=a[i]+b[i]+c[i]+d[i]+e[i]+f[i];
end;
for i:=1 to t do
        writeln(g[i]);
end;
end;
readln;
readln;
end.
