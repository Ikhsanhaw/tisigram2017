program asdasd;
var
	lx,ly,lr,px,py:integer;
begin
	readln(lx,ly);
	readln(lr);
	readln(px,py);
	if (px=lx) and (py=ly) then
		writeln('tepat pada titik tengah arena pertandingan')
	else if ((px=lx+lr) and (py=ly)) or ((px=lx) and (py=ly+lr)) or ((px=lx-lr) and (py=ly)) or ((px=lx) and (py=ly-lr)) then
		writeln('tepat pada batas arena pertandingan')
	else if ((px<lx+lr) and (px>lx-lr)) and ((py<ly+lr) and (px>ly-lr)) then
		writeln('di dalam arena pertandingan')
	else
		writeln('di luar arena pertandingan');
end.
