program asdasd;
var
	t,i,a,b,fp:longint;
function fpb(a:longint;b:longint):longint;
begin
	if (b=0) then
		fpb:=a
	else
		fpb:=fpb(b,a mod b);
	//fpb:=0;
end;
begin
	readln(t);
	for i:=1 to t do
	begin
		readln(a,b);
		if (a>b) then
			fp:=fpb(a,b)
		else
			fp:=fpb(b,a);
		writeln(b div fp,'/',a div fp);
		//writeln(fp);
		//writeln(fpb(a,b));
		//while 
	end;
end.
