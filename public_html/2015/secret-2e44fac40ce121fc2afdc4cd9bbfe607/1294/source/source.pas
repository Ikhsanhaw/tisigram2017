var
	n : integer;

procedure bintang(n : integer);
var
	i : integer;
begin
	if (n = 1) then
		writeln('*')
	else begin
		bintang(n-1);
		for i := 1 to n do begin
			write('*');
		end;
		writeln;
		bintang(n-1);
	end;
end;

begin
	readln(n);
	bintang(n);
end.