var
	n,i,j,count : integer;
	s : string;

begin
	readln(n);
	for i := 1 to n do begin
		readln(s);
		count := 0;
		for j := length(s) downto 1 do begin
			if (s[j] = '0') then
				inc(count)
			else break;
		end;
		writeln(count);
	end;
end.