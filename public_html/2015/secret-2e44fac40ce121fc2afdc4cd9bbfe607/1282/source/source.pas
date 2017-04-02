var
	x,s,t : string;
	count, i : integer;

begin
	readln(s);
	readln(t);
	count := 0;
	for i := 1 to length(s) do begin
		x := copy(s,i,length(t));
		if (x = t) then
			inc(count);
	end;
	writeln(count);
end.