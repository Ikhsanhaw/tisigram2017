procedure cek(c: char);
begin
	if (c='a') or (c='c') or (c='e') or (c='g') or (c='i') or (c='k') or (c='m') or (c='o') or (c='q') or (c='s') or (c='u') or (c='w') or (c='y') then else
	write(c);
end;


var
	n,i,j,p	: integer;
	s		: string;
begin
	readln(n);
	for i:=1 to n do
	begin
		readln(s);
		p:=length(s);
		for j:=1 to p do
			cek(s[j]);
		writeln;
	end;
end.