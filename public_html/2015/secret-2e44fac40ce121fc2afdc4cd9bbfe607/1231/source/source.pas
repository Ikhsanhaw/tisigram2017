Program lotek;

var

a,b,m,n,r,z,i : integer ;


begin

   readln(z);
   for i:= 1 to z do
   begin
   readln(a,b);
   if a>b then
   begin
        m:=a;
        n:=b;
   end
   else
   begin
        m:=b;
        n:=a;
   end;
   repeat
   r:=m mod n;
   if r<>0 then
   begin
      m:=n;
      n:=r;
   end;
   until (r=0);
   a :=a div n;
   b := b div n;
   writeln(a,'/',b);
   end;
end.

