program asdasd;
var
	n,j,i,len:integer;
	s1,s2:string;
begin
	readln(n);
	for j:=1 to n do
	begin
	s2:='';
	readln(s1);
	len:=length(s1);
	for i:=1 to len do
	begin
		if (ord(s1[i]) mod 2=0) then
			s2:=s2+s1[i];
	end;
	writeln(s2);
	end;
	//i:=ord(s1[1]);
	//writeln(i); 
end.
