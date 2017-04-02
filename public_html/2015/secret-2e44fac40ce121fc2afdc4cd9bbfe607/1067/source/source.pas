procedure QSort(var numbers : array of longint; left : longint; right : longint);
var 
	pivot, l_ptr, r_ptr : longint;
begin
	l_ptr := left;							
	r_ptr := right;							
	pivot := numbers[left];
	
	while (left < right) do
	begin
		while ((numbers[right] >= pivot) and (right > left)) do
		right := right - 1;
		
		If (left <> right) then
		begin
			numbers[left] := numbers[right];
			left := left + 1;
		end;
		
		while ((numbers[left] <= pivot) and (right > left)) do
			left := left + 1;
		
		if (left <> right) then
		begin
			numbers[right] := numbers[left];
			right := right - 1;
		end;
	end;
	
	numbers[left] := pivot;
	pivot := left;
	left := l_ptr;
	right := r_ptr;
	
	if (left < pivot) then
		QSort(numbers, left, pivot-1);
	
	if (right > pivot) then
		QSort(numbers, pivot+1, right);
end;

procedure QuickSort(var numbers : array of longint; size : longint);
begin
 QSort( numbers, 0, size-1);
end;

var
	x			: array [1..100001] of longint;
	n,i,a,tot 	: longint;
	sum			: int64;
begin
	readln(n);
	for i:=1 to n-1 do read(x[i]);
	readln(x[n]);
	QuickSort(x,n);
	a:=0;
	sum:=0;
	tot:=0;
	for i:=1 to n do
		if x[i]<>a then
		begin
			sum:=sum+x[i];
			a:=x[i];
			tot:=1;
		end else
		begin
			inc(tot);
			if tot>x[i] then 
			begin
				write(-1);
				exit;
			end;
		end;
	write(sum);
end.
