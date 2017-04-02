program no3;
var
i,t:integer;
a,b,c,d,e,f:array[1..100] of longint;
a1,b1,c1,d1,e1,f1:array[1..100] of longint;
g:array[1..6] of longint;
begin
readln(t);
if (t >= 1) and (t <= 10) then
begin
for i:=1 to t do
begin
        read(a[i]); read(b[i]); read(c[i]); read(d[i]); read(e[i]); read(f[i]);
end;
if (a[i] >= 1) and (a[i] <= 10000) then
begin
        for i:=1 to t do
        a1[i]:=a[i];
end
else
exit;
if (b[i] >= 1) and (b[i] <= 10000) then
begin
        for i:=1 to t do
        b1[i]:=b[i];
end
else
exit;
if (c[i] >= 1) and (c[i] <= 10000) then
begin
        for i:=1 to t do
        c1[i]:=c[i];
end
else
exit;
if (d[i] >= 1) and (d[i] <= 10000) then
begin
        for i:=1 to t do
        d1[i]:=d[i];
end
else
exit;
if (e[i] >= 1) and (e[i] <= 10000) then
begin
        for i:=1 to t do
        e1[i]:=e[i];
end
else
exit;
if (f[i] >= 1) and (f[i] <= 10000) then
begin
        for i:=1 to t do
        f1[i]:=f[i];
end
else
exit;
for i:=1 to t do
begin
        g[i]:=a1[i]+b1[i]+c1[i]+d1[i]+e1[i]+f1[i];
end;
for i:=1 to t do
        writeln(g[i]);
end
else
exit;
readln;
readln;
end.
