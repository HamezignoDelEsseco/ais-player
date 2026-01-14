# What this is
We want to build a vessel tracker application using raylib in C. The project is educational and is intended to be used to learn C, raylib, and also to get to master the AIS data


# Build
```powershell
cmake -G "Ninja" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build
cmake --build build
```

Tasks:
- [ ] Load a background image with raylib
- [ ] Render the world map in an UI with zoom functionality
- [ ] Build the AIS parser: build a small utilisy program to transform it into .bin files for compression


# AIS data header
```
┌───────────┬─────────────────────┬──────────┬────────────┬───┬───────┬───────┬───────┬──────────────────┐
│ MMSI      ┆ BaseDateTime        ┆ LAT      ┆ LON        ┆ … ┆ Width ┆ Draft ┆ Cargo ┆ TransceiverClass │
│ ---       ┆ ---                 ┆ ---      ┆ ---        ┆   ┆ ---   ┆ ---   ┆ ---   ┆ ---              │
│ i64       ┆ str                 ┆ f64      ┆ f64        ┆   ┆ i64   ┆ f64   ┆ i64   ┆ str              │
╞═══════════╪═════════════════════╪══════════╪════════════╪═══╪═══════╪═══════╪═══════╪══════════════════╡
│ 368053730 ┆ 2020-03-21T00:00:00 ┆ 38.06298 ┆ -122.26425 ┆ … ┆ null  ┆ null  ┆ null  ┆ A                │
│ 368091590 ┆ 2020-03-21T00:00:00 ┆ 25.76442 ┆ -80.14541  ┆ … ┆ null  ┆ null  ┆ null  ┆ A                │
│ 316034963 ┆ 2020-03-21T00:00:00 ┆ 49.27077 ┆ -123.31502 ┆ … ┆ null  ┆ null  ┆ null  ┆ A                │
│ 257480000 ┆ 2020-03-21T00:00:00 ┆ 27.92041 ┆ -82.42046  ┆ … ┆ null  ┆ null  ┆ null  ┆ A                │
│ 368042970 ┆ 2020-03-21T00:00:01 ┆ 36.93867 ┆ -76.01777  ┆ … ┆ null  ┆ null  ┆ null  ┆ A                │
└───────────┴─────────────────────┴──────────┴────────────┴───┴───────┴───────┴───────┴──────────────────┘
```

# Notes on activating virtualenvs on Window
```
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
.\.venv\Scripts\Activate.ps1
```
