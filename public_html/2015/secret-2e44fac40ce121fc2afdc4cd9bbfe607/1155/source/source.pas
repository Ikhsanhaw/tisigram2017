program asdasd;
var
	lx,ly,lr,px,py:integer;
begin
	readln(lx,ly);
	readln(lr);
	readln(px,py);
	if (px=lx) and (py=ly) then
		writeln('tepat pada titik tengah arena pertandingan')
	else if (px<lr) and (py<lr) then
		writeln('di dalam arena pertandingan')
	else if ((px=lr) and (py=0)) or ((px=0) and (py=lr)) or ((px=-lr) and (py=0)) or ((px=0) and (py=-lr)) then
		writeln('tepat pada batas arena pertandingan')
	else
		writeln('di luar arena pertandingan');
end.
