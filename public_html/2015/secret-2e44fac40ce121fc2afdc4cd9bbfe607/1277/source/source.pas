var
	s,t : string;
	count : integer;
begin
	readln(s);
	readln(t);
	count := 0;
	while (pos(t,s) <> 0) do begin
		inc(count);
		s := copy(s, pos(t,s) + 1, length(s));
	end;
	writeln(count);
end.