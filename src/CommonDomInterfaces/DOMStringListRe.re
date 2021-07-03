type t = CommonDomInterfacesTypesRe.domStringList;

[@bs.get] external length: t => int = "length";
[@bs.send.pipe: t] external item: int => string = "item";
[@bs.send.pipe: t] external contains: string => bool = "contains";
