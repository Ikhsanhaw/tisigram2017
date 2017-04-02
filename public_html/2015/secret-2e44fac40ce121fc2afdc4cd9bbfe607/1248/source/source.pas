var
	s,t,x : string;
	count : integer;
begin
	readln(s);
	readln(t);
	count := 0;
	x := '';
	while (pos(t,s) <> 0) do begin
		if (pos(t,s) <> 0) then begin
			inc(count);
			s := copy(s,pos(t,s) + length(t),length(s));
		end;
	end;
	writeln(count);
end.