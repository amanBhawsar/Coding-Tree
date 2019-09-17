SELECT TOP 1 REPLACE(ROUND(lat_n, 4), '0', '') from
(
    SELECT TOP 50 PERCENT lat_n 
    FROM station 
    ORDER BY  lat_n
)for_median
ORDER BY lat_n DESC