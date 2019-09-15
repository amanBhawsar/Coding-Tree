select city,length(city) from station order by length(city), city LIMIT 1;
select city,length(city) from station order by length(city) desc, city  LIMIT 1;