var
	n : integer;

begin
	readln(n);
	while (n mod 2 = 0) do begin
		n := n div 2;
	end;
	if (n = 1) then writeln('TRUE') else writeln('FALSE');
end.