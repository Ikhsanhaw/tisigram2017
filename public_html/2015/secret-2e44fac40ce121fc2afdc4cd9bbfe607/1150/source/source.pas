program asdasd;
uses crt;
var
	a,b,c:char;
	tot:integer;
	has:double;
procedure cekindeks(inx:char);
begin
	if (inx='S') then
		tot:=tot+5
	else if (inx='A') then
		tot:=tot+4
	else if (inx='B') then
		tot:=tot+3
	else if (inx='C') then
		tot:=tot+2
	else if (inx='D') then
		tot:=tot+1
	else 
		tot:=tot+0;
end;
begin
	tot:=0;
	readln(a);
	readln(b);
	readln(c);
	cekindeks(a);
	cekindeks(b);
	cekindeks(c);
	has:=tot/3;
	if (has=5) then
		writeln('S')
	else if (has<5) and (has>=4.5) then
		writeln('S-')
	else if (has<4.5) and (has>4) then
		writeln('A+')
	else if (has=4) then
		writeln('A')
	else if (has<4) and (has>=3.5) then
		writeln('A-')
	else if (has<3.5) and (has>3) then
		writeln('B+')
	else if (has=3) then
		writeln('B')
	else if (has<3) and (has>=2.5) then
		writeln('B-')
	else if (has<2.5) and (has>2) then
		writeln('C+')
	else if (has=2) then
		writeln('C')
	else if (has<2) and (has>=1.5) then
		writeln('C-')
	else if (has<1.5) and (has>1) then
		writeln('D+')
	else if (has=1) then
		writeln('D')
	else if (has>0) then
		writeln('D-')
	else 
		writeln('E');
	
end.
