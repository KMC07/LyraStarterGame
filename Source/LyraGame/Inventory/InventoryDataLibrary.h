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
	UPROPERTY(EditAnywhere)
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
	TArray<int32> IntegerRow;

	int32 operator[](int32 i) const
	{
		return IntegerRow[i];
	}

	int32& operator[](int32 i)
	{
		return IntegerRow[i];
	}

	void Add(bool Cell)
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
