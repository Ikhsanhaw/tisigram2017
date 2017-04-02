program asdasd;
var
	tgl:string;
	a,b,c,h,i,tg,bl,th,k:integer;
	kelar:boolean;
function fpb(a:integer;b:integer):integer;
begin
	if (b=0) then
		fpb:=a
	else
		fpb:=fpb(b,a mod b);
	//fpb:=0;
end;
function kpk(c:integer;d:integer):integer;
begin
	kpk:=(c*d) div fpb(c,d);
end;
begin
	readln(tgl);
	readln(a);
	readln(b);
	readln(c);
	h:=0;
	i:=0;
	tg:=0;
	bl:=0;
	th:=0;
	k:=kpk(a,kpk(b,c));
	while (h<2) do
	begin
		i:=i+1;
		if (tgl[i]='/') then
		begin
			h:=h+1;
			if (h=1) then
			begin
				tg:=tg+(ord(tgl[i-1])-48)+((ord(tgl[i-2])-48)*10);
			end
			else
			begin
				bl:=bl+(ord(tgl[i-1])-48)+((ord(tgl[i-2])-48)*10);
			end;
		end;
	end;
	th:=th+(ord(tgl[i+4])-48)+((ord(tgl[i+3])-48)*10)+((ord(tgl[i+2])-48)*100)+((ord(tgl[i+1])-48)*1000);
	tg:=tg+k;
	if (bl mod 2=1) then
	begin
		if (tg>31) then
			begin
			tg:=tg-31;
			bl:=bl+1;
			end;
	end
	else if (bl mod 2=0) then
	begin
		if (bl=2) then
		begin
			if ((th mod 100<>0) and (th mod 4=0)) or (th mod 400=0) then
			begin
				if (tg>29) then
				begin
					tg:=tg-29;
					bl:=bl+1;
				end;
			end
			else
			begin
				if (tg>28) then
				begin
					tg:=tg-28;
					bl:=bl+1;
				end;
			end;
		end
		else
		begin
			if (tg>30) then
			begin
				tg:=tg-30;
				bl:=bl+1;
			end;
		end;
	end;
	if (bl>12) then
	begin
		bl:=bl-12;
		th:=th+1;
	end;
	writeln(tg,'/',bl,'/',th);
	//writeln(tg);
	//writeln(bl);
	//writeln(th);
	//writeln(k);
end.
