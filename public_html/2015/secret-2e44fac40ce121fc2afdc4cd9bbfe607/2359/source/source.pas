program no1;
var
x:array[1..1000] of double;
i,t:integer;
a,b:real;
begin
a:=exp(64*ln(2)) - 1;
write(''); readln(t);
if (t >= 1) and (t <= 100) then
begin
for i:=1 to t do
begin
       write(''); readln(x[i]);
end;
if (x[i] >= 0) then
begin
for i:=1 to t do
begin
        if(x[i] >= 0) and (x[i] <= a) then
        writeln('true')
        else
        writeln('false');
end;
end
else
exit;
end
else
exit;
readln;
end.
