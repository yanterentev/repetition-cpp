CREATE TABLE IF NOT EXISTS journals (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	time_out TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
	time_in TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
	auto_id INT NOT NULL,
	route_id INT NOT NULL,
	FOREIGN KEY (route_id)
	REFERENCES routes(id)
	ON DELETE CASCADE,
	FOREIGN KEY (auto_id)
	REFERENCES autos(id)
	ON DELETE CASCADE
);

/*
TIMESTAMP(2) YY
TIMESTAMP(4) YYMM
TIMESTAMP(6) YYMMDD
TIMESTAMP(8) YYYYMMDD
TIMESTAMP(10) YYMMDDHHMM
TIMESTAMP(12) YYMMDDHHMMSS
TIMESTAMP(14) YYYYMMDDHHMMSS*/