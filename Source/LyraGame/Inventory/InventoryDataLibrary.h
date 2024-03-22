#pragma once
#include "CoreMinimal.h"

#include "InventoryDataLibrary.generated.h"

UENUM(BlueprintType)
enum class EItemRotation : uint8
{
	Rotation_0 UMETA(DisplayName = "0 Degrees"),
	Rotation_90 UMETA(DisplayName = "90 Degrees"),
	Rotation_180 UMETA(DisplayName = "180 Degrees"),
	Rotation_270 UMETA(DisplayName = "270 Degrees")
};

USTRUCT(BlueprintType)
struct F1DBooleanRow
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<bool> BooleanRow;

	bool operator[](int32 i) const
	{
		return BooleanRow[i];
	}

	bool& operator[](int32 i)
	{
		return BooleanRow[i];
	}

	void Add(bool Cell)
	{
		BooleanRow.Add(Cell);
	}

	int32 Num() const
	{
		return BooleanRow.Num();
	}

	void SetNum(int32 NewNum)
	{
		BooleanRow.SetNum(NewNum);
	}

	void Init(int32 Size, bool Value)
	{
		BooleanRow.Init(Value, Size);
	}
	
	bool IsValidIndex(int32 Index) const
	{
		return BooleanRow.IsValidIndex(Index);
	}
};


USTRUCT(BlueprintType)
struct F1DIntegerRow
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> IntegerRow;

	int32 operator[](int32 i) const
	{
		return IntegerRow[i];
	}

	int32& operator[](int32 i)
	{
		return IntegerRow[i];
	}

	void Add(int32 Cell)
	{
		IntegerRow.Add(Cell);
	}

	int32 Num() const
	{
		return IntegerRow.Num();
	}

	void SetNum(int32 NewNum)
	{
		IntegerRow.SetNum(NewNum);
	}

	void Init(int32 Size, int32 Value)
	{
		IntegerRow.Init(Value, Size);
	}
	
	bool IsValidIndex(int32 Index) const
	{
		return IntegerRow.IsValidIndex(Index);
	}
};

USTRUCT(BlueprintType)
struct FInventoryClumpShape
{
	GENERATED_BODY()

public:
	// The shape/layout of the clump as a boolean grid
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<F1DBooleanRow> ClumpGrid;
};

USTRUCT(BlueprintType)
struct FInventoryClumpIndexMapping
{
	GENERATED_BODY()

public:
	// The index mapping of the clump to grid cell indexes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<F1DIntegerRow> ClumpGrid;

	F1DIntegerRow operator[](int32 i) const
	{
		return ClumpGrid[i];
	}

	F1DIntegerRow& operator[](int32 i)
	{
		return ClumpGrid[i];
	}

	void Add(const F1DIntegerRow& Cell)
	{
		ClumpGrid.Add(Cell);
	}

	int32 Num() const
	{
		return ClumpGrid.Num();
	}

	void SetNum(int32 NewNum)
	{
		ClumpGrid.SetNum(NewNum);
	}

	void Init(int32 Size, const F1DIntegerRow& Value)
	{
		ClumpGrid.Init(Value, Size);
	}
	
	bool IsValidIndex(int32 Index) const
	{
		return ClumpGrid.IsValidIndex(Index);
	}
};
