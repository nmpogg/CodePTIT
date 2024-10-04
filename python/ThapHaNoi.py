def thap_ha_noi(n, cot_dau, cot_cuoi, cot_trung_gian):
    if n == 1:
        print(f"{cot_dau} -> {cot_cuoi}")
    else:
        thap_ha_noi(n-1, cot_dau, cot_trung_gian, cot_cuoi)
        print(f"{cot_dau} -> {cot_cuoi}")
        thap_ha_noi(n-1, cot_trung_gian, cot_cuoi, cot_dau)

if __name__ == "__main__":
    n = int(input())
    thap_ha_noi(n, 'A', 'C', 'B')
